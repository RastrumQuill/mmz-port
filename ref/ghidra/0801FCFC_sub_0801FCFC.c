// sub_0801FCFC at 0x0801FCFC (thumb)

undefined4 sub_0801FCFC(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xbe) < 3) {
    if ((*(byte *)(param_1 + 0xbe) < 2) &&
       ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) != 0)) {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x202;
      sub_08018C20(param_1,0x13,1 - *(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    }
    else if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
      sub_08018C20(param_1,0xf,3,6);
      sub_08001EAC(0x1e);
      sub_0801FD8C(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

