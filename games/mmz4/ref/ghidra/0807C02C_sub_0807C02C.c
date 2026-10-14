// sub_0807C02C at 0x0807C02C (thumb)

undefined4 sub_0807C02C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 in_lr;
  byte abStack_20 [4];
  undefined auStack_1c [4];
  
  sub_08128B5C(abStack_20,&DAT_081292f9,2);
  sub_08128B5C(auStack_1c,&DAT_081292fb,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0807E7E0(param_1,2);
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  iVar2 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar2;
  if (iVar2 == 0) {
    bVar1 = *(int *)(param_1 + 0xb4) + 0x7800 < *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 200) =
         *(int *)(param_1 + 0xb4) + *(int *)(&DAT_0885a314 + (uint)abStack_20[bVar1] * 4) + 0x7800;
    *(undefined *)(param_1 + 0xbe) = auStack_1c[bVar1];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

