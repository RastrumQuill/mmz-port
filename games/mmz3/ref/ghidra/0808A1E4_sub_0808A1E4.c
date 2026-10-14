// sub_0808A1E4 at 0x0808A1E4 (thumb)

undefined4 sub_0808A1E4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (uint)(0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) * -0x100;
    sub_08017700(param_1,0x6d01);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_1c = *(int *)(iVar3 + 0x5c) / 2;
    local_18 = 0x60;
    sub_080B7E18(param_1,param_1 + 0x54,&local_1c,0x40,&DAT_083653c8,0x18);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000),
     sVar2 != 0)) {
    sub_0808A130(param_1);
  }
  return in_lr;
}

