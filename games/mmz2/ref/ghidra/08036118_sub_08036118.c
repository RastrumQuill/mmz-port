// sub_08036118 at 0x08036118 (thumb)

undefined4 sub_08036118(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = DAT_0202ec34 & 0x8000;
  }
  else {
    uVar1 = DAT_0202ec36 & 0x8000;
  }
  if (uVar1 == 0) {
    bVar2 = sub_08036CBC(param_1,2);
    if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & bVar2) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x2b8) & 1;
    }
    *(byte *)(param_1 + 0x2b8) = bVar2;
  }
  else {
    *(undefined *)(param_1 + 0x2b8) = 0;
  }
  return in_lr;
}

