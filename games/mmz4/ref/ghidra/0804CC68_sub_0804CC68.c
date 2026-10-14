// sub_0804CC68 at 0x0804CC68 (thumb)

undefined8 sub_0804CC68(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar2 = uVar1 & 0xffff;
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = 0;
  }
  if ((uVar2 & 0xf) == 0xf) {
    uVar2 = 0;
  }
  bVar4 = (uVar2 & 0xf) != 0;
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  uVar1 = (uint)bVar4;
  if ((*(uint *)(iVar3 + 0x8c) & 8) != 0) {
    uVar1 = 1;
  }
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x5000 < uVar2) {
    uVar1 = 2;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

