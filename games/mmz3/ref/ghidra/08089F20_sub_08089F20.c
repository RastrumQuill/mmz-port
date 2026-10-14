// sub_08089F20 at 0x08089F20 (thumb)

undefined4 sub_08089F20(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = DAT_02030108 & 0x42;
  if ((DAT_02030108 & 0x42) == 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar4 + 0xc) < 3) {
      cVar2 = sub_08089D60(param_1);
      if (cVar2 != '\0') {
        return in_lr;
      }
      if (1 < *(byte *)(iVar4 + 0xc)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 0;
        sub_08089FF8(param_1);
        return in_lr;
      }
      sub_08089E2C(param_1);
      cVar2 = sub_08089DB0(param_1);
      if (cVar2 != '\0') {
        return in_lr;
      }
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365134 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836513c + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 0;
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(uint *)(param_1 + 0x8c) = uVar3;
  *(uint *)(param_1 + 0x90) = uVar3;
  *(char *)(param_1 + 0x94) = (char)uVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

