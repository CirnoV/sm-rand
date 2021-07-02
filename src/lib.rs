use rand::Rng;

#[no_mangle]
pub extern "C" fn get_random_int(nmin: i32, nmax: i32) -> i32 {
    let mut nmin = nmin;
    let mut nmax = nmax;
    if nmin > nmax {
        std::mem::swap(&mut nmin, &mut nmax);
    }
    rand::thread_rng().gen_range(nmin..=nmax)
}

#[no_mangle]
pub extern "C" fn get_random_float(nmin: f32, nmax: f32) -> f32 {
    let mut nmin = nmin;
    let mut nmax = nmax;
    if nmin > nmax {
        std::mem::swap(&mut nmin, &mut nmax);
    }
    rand::thread_rng().gen_range(nmin..=nmax)
}
