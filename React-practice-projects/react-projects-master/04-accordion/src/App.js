import React, { useState } from 'react';
import data from './data';
import SingleQuestion from './Question';
function App() {
  const [questions, setQuestions] = useState(data);
  const [expandedQuestionId, setExpandedQuestionId] = useState(null);

  const toggleQuestion = (id) => {
    setExpandedQuestionId(expandedQuestionId === id ? null : id);
  };
  return <main>
    <div className="container">
      <h3>questions and answers about login</h3>
      <section className='info'>
        {
          questions.map((question) =>{
            return <SingleQuestion 
              key={question.id}
              {...question}
              isExpanded={expandedQuestionId === question.id}
              toggleQuestion={() => toggleQuestion(question.id)}>
            </SingleQuestion>
          })
        }
      </section>
    </div>
  </main>;
}

export default App;
