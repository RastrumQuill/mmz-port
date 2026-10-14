// sub_08031F04 at 0x08031F04 (thumb)

undefined4 sub_08031F04(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fa14 + (uint)*(byte *)(param_1 + 0xe) * 4));
  sVar1 = sub_0802BFD0(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,0);
  if ((sVar1 != 0) ||
     (sVar1 = sub_0802C2BC(param_1,&DAT_0884fe30 + (uint)*(byte *)(param_1 + 0x174) * 8,1),
     sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

