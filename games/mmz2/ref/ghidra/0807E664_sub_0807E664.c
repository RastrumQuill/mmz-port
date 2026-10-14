// sub_0807E664 at 0x0807E664 (thumb)

undefined4 sub_0807E664(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = false;
  sub_080128D4();
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(iVar4 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x4000 + 0x8000;
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(int *)(param_1 + 0xb4) <= iVar4) goto LAB_0807e6b6;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x54) - ((uint)*(byte *)(param_1 + 0x11) * 0x4000 + 0x8000);
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 0xb4)) goto LAB_0807e6b6;
  }
  bVar1 = true;
LAB_0807e6b6:
  iVar2 = *(int *)(param_1 + 0x54) - iVar2;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < iVar3) {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

