// sub_080744E4 at 0x080744E4 (thumb)

undefined4 sub_080744E4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      iVar2 = *(int *)(iVar2 + 0x28);
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x280c);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_083636dc);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = sub_08063614(param_1);
  if ((iVar2 == 0) &&
     (sVar1 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 == 0)) {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  return in_lr;
}

