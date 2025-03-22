export default function Slider()
{
    return(
        <div id="carouselExampleDark" className="carousel carousel-dark slide sliderhight" >
  <div className="carousel-indicators">
    <button
      type="button"
      data-bs-target="#carouselExampleDark"
      data-bs-slide-to={0}
      className="active"
      aria-current="true"
      aria-label="Slide 1"
    />
    <button
      type="button"
      data-bs-target="#carouselExampleDark"
      data-bs-slide-to={1}
      aria-label="Slide 2"
    />
    <button
      type="button"
      data-bs-target="#carouselExampleDark"
      data-bs-slide-to={2}
      aria-label="Slide 3"
    />
     <button
      type="button"
      data-bs-target="#carouselExampleDark"
      data-bs-slide-to={3}
      aria-label="Slide 4"
    />
     <button
      type="button"
      data-bs-target="#carouselExampleDark"
      data-bs-slide-to={4}
      aria-label="Slide 5"
    />
  </div>
  <div className="carousel-inner sliderhight">
    <div className="carousel-item active " data-bs-interval={10000}>
      <img src="/img/hero_1.jpg" className="d-block w-100 briteness sliderhight" alt="ok" />
      <div className="carousel-caption  text-white mb-3 ">
        <h1 className='mb-4'>Farming is the best solution of worlds starvation</h1>
        <p className='mb-3'>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
      </div>
    </div>
    <div className="carousel-item " data-bs-interval={2000}>
      <img src="/img/hero_2.jpg" className="d-block w-100 briteness sliderhight" alt="ok" />
      <div className="carousel-caption  text-white mb-3">
        <h1 className='mb-4'>Organic vegetables is good for health</h1>
        <p className='mb-3'>Nam libero tempore, cum soluta nobis est eligendi optio cumque nihil impedit quo minus id quod maxime placeat facere possimus.</p>
      </div>
    </div>
    <div className="carousel-item">
      <img src="/img/hero_3.jpg" className="d-block w-100 briteness sliderhight" alt="ok" />
      <div className="carousel-caption  text-white mb-3">
        <h2 className='mb-4'>Providing Fresh Produce Every Single Day</h2>
        <p className='mb-3'>Beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit.</p>
      </div>
    </div>
    <div className="carousel-item " data-bs-interval={2000}>
      <img src="/img/hero_4.jpg" className="d-block w-100   briteness sliderhight" alt="ok" />
      <div className="carousel-caption  text-white mb-3">
        <h1 className='mb-4'>Farming as a Passione</h1>
        <p className='mb-3'>Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius.</p>
      </div>
    </div>
    <div className="carousel-item " data-bs-interval={2000}>
      <img src="/img/hero_5.jpg" className="d-block w-100  briteness sliderhight" alt="ok" />
      <div className="carousel-caption  text-white mb-3">
        <h1 className='mb-4'>Good Food For All</h1>
        <p className='mb-3'>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
      </div>
    </div>

  </div>
  <button
    className="carousel-control-prev"
    type="button"
    data-bs-target="#carouselExampleDark"
    data-bs-slide="prev"
  >
    <span className="carousel-control-prev-icon" aria-hidden="true" />
    <span className="visually-hidden">Previous</span>
  </button>
  <button
    className="carousel-control-next"
    type="button"
    data-bs-target="#carouselExampleDark"
    data-bs-slide="next"
  >
    <span className="carousel-control-next-icon" aria-hidden="true" />
    <span className="visually-hidden">Next</span>
  </button>
</div>

    )
}