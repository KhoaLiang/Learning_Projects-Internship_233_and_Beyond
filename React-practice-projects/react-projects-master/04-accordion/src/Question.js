//Basic approach
// import React, { useState } from 'react';
// import { AiOutlineMinus, AiOutlinePlus } from 'react-icons/ai';
// const Question = ({title, info, id}) => {
//   const [showInfo, setShowInfo] = useState(false);
//   const toggleInfo = () => {
//     setShowInfo(!showInfo);
//   };
//   return <article className='question'>
//     <header>
//       <h4>{title}</h4>
//       <button className='btn'>
//         {showInfo ? <AiOutlineMinus onClick={toggleInfo} /> : <AiOutlinePlus onClick={toggleInfo} />}
//       </button>
//     </header>
    
//     {showInfo ? <p>{info}</p> : <p></p>}
//   </article>;
// };

// export default Question;
import React from 'react';
import { AiOutlineMinus, AiOutlinePlus } from 'react-icons/ai';

const Question = ({ title, info, id, isExpanded, toggleQuestion }) => {
  return (
    <article className='question'>
      <header>
        <h4>{title}</h4>
        <button className='btn' onClick={toggleQuestion}>
          {isExpanded ? <AiOutlineMinus /> : <AiOutlinePlus />}
        </button>
      </header>
      {isExpanded && <p>{info}</p>}
    </article>
  );
};

export default Question;