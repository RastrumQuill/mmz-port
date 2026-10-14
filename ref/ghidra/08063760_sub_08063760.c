// sub_08063760 at 0x08063760 (thumb)

undefined4 sub_08063760(int param_1)

{
  undefined4 in_lr;
  
  sub_0809250C(param_1,0);
  if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_0800561C(param_1 + 0x74,&DAT_082b0748);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

