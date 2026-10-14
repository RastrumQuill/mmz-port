// sub_08048558 at 0x08048558 (thumb)

undefined4 sub_08048558(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
    DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
  }
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x1f) = 0;
  sub_08029778(param_1,0x17);
  sub_080297C0(param_1);
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x1000) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

