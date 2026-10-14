// sub_080BBD40 at 0x080BBD40 (thumb)

undefined4 sub_080BBD40(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_2c [4];
  byte abStack_28 [4];
  undefined auStack_24 [4];
  undefined4 local_20 [2];
  
  local_20[0] = 0x199;
  local_20[1] = 0x5f;
  sub_08128B5C(auStack_2c,&DAT_08129978,2);
  sub_08128B5C(abStack_28,&DAT_0812997a,2);
  sub_08128B5C(auStack_24,&DAT_0812997c,2);
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861150 + (uint)abStack_28[bVar1] * 0x18);
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(int *)(param_1 + 100) = *(int *)(iVar2 + 0xb8) + 0x8fff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 100) <= *(int *)(param_1 + 0x58)) {
    sub_08002B10(*(undefined2 *)(local_20 + bVar1));
    sub_0801FE64(auStack_24[bVar1],param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
    *(undefined *)(param_1 + 0xd) = auStack_2c[bVar1];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

