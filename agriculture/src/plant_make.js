export default function PlantMake()
{
    return(
        <>
        <div className="container py-5">
  <div className="row align-items-center">
    {/* Text Section */}
    <div className="col-md-6">
      <h2 className="text-success fw-bold">Plants Make Life Better</h2>
      <p className="text-muted">
        Lorem ipsum dolor sit amet consectetur adipisicing elit. Enim
        necessitatibus placeat, atque qui voluptatem velit explicabo vitae
        repellendus architecto provident nisi ullam minus asperiores commodi!
        Tenetur, repellat aliquam nihil illo.
      </p>
      <ul className="list-unstyled">
        <li className="d-flex align-items-center mb-2">
          <span className="text-success me-2 bi bi-check-circle" />
          <span style={{color:"green"}}>&#10003;</span><span>Lorem ipsum dolor sit amet</span>
        </li>
        <li className="d-flex align-items-center mb-2">
          <span className="text-success me-2 bi bi-check-circle" />
          <span style={{color:"green"}}>&#10003;</span><span>Velit explicabo vitae repellendu</span>
        </li>
        <li className="d-flex align-items-center">
          <span className="text-success me-2 bi bi-check-circle" />
          <span style={{color:"green"}}>&#10003;</span><span>Repellat aliquam nihil illo</span>
        </li>
      </ul>
      <button className="btn btn-success mt-3">GET IN TOUCH</button>
    </div>
    {/* Image Section */}
    <div className="col-md-6 text-center">
      <div className="position-relative">
        <img
          src="https://bootstrapmade.com/content/demo/AgriCulture/assets/img/img_sq_1.jpg"
          className="img-fluid rounded"
          alt="Farmer with vegetables"
        />
       
      </div>
    </div>
  </div>
</div>
        </>
    )
}