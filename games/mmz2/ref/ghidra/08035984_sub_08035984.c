// sub_08035984 at 0x08035984 (thumb)

undefined8 sub_08035984(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 3) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 2;
    if ((bVar1 & 1) != 0) {
      iVar4 = 1;
    }
  }
  if (*(byte *)(param_1 + 0x223) < 3) {
    uVar3 = *(byte *)(param_1 + 0x223) + 1;
  }
  else {
    uVar3 = 3;
  }
  uVar2 = uVar3 - 1;
  if (param_2 < uVar3) {
    uVar2 = param_2;
  }
  uVar2 = (uint)*(byte *)(iVar4 * 3 + *(int *)(&DAT_08335b18 + (uint)*(byte *)(param_1 + 0x1fc) * 4)
                         + uVar2);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      if ((*(ushort *)(param_1 + 0x218) & 0x10) != 0) {
        uVar2 = 5;
      }
    }
    else if ((*(ushort *)(param_1 + 0x218) & 0x80) != 0) {
      uVar2 = 6;
    }
  }
  if (param_2 < uVar3) {
    if ((iVar4 != 0) && (uVar2 == 0)) {
      uVar2 = (uint)*(byte *)(*(int *)(&DAT_08335b18 + (uint)*(byte *)(param_1 + 0x1fc) * 4) +
                             param_2);
    }
  }
  else if (uVar2 - 1 < 4) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

