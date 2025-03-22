export default function Subscribe() {
    return(

        <div className=" bg-light p-5">
  <div className="row align-items-center p-3">
    <div className="col-md-6">
      <h3 className=" ">SUBSCRIBE TO OUR NEWSLETTER</h3>
      <p className="text-black-50 mb-2">
        Lorem ipsum dolor sit amet consectetur adipisicing elit. Nesciunt,
        reprehenderit!
      </p>
    </div>
    <div className="col-md-6">
      <form className="form-inline justify-content-md-end">
        <input
          type="email"
          className="form-control w-75 p-2 d-inline  border-success rounded-0 "
          placeholder="Enter your email"
          required=""
        />
         <button type="submit" className="btn p-2 mb-1 btn-success rounded-0 subscribe-btn ">
          Subscribe
        </button>
         
       
      </form>
    </div>
    
  </div>
</div>

    )
}