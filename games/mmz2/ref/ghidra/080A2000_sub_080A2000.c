// sub_080A2000 at 0x080A2000 (thumb)

undefined4 sub_080A2000(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(byte *)(iVar4 + 0xbd) < *(byte *)(param_1 + 0x11)) goto LAB_080a205e;
    sub_080127E4(param_1,0x3901);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (*(byte *)(param_1 + 0x11) <= *(byte *)(iVar4 + 0xbd)) goto LAB_080a205e;
    sub_080127E4(param_1,0x3900);
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar1;
LAB_080a205e:
  sub_080128D4(param_1);
  iVar3 = *(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0xb4);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  iVar2 = *(int *)(iVar4 + 0x58) - *(int *)(iVar4 + 0xb8);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar4 + 0xb4) + (iVar3 >> 2) * (uint)*(byte *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x58) =
       *(int *)(iVar4 + 0xb8) + (uint)*(byte *)(param_1 + 0x11) * (iVar2 >> 2);
  return in_lr;
}

