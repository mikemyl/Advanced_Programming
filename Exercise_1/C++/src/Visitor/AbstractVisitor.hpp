#ifndef ABSTRACTVISITOR_HPP
#define ABSTRACTVISITOR_HPP

class OperatingSystem;
class WindowsOS;
class XubuntuOS;
class MacOS;

class AbstractVisitor
{
    public:
        virtual void visit(WindowsOS*) = 0;
        virtual void visit(XubuntuOS*) = 0;
        virtual void visit(MacOS*) = 0;
};

#endif
