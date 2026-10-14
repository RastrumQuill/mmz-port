// sub_0807CFB0 at 0x0807CFB0 (thumb)

undefined4 sub_0807CFB0(int param_1)

{
  bool bVar1;
  undefined4 in_lr;
  byte abStack_1c [4];
  undefined auStack_18 [4];
  
  sub_08128B5C(abStack_1c,&DAT_081292f9,2);
  sub_08128B5C(auStack_18,&DAT_081292fb,2);
  bVar1 = *(int *)(param_1 + 0xb4) + 0x7800 < *(int *)(DAT_0202dbf0 + 0x54);
  *(int *)(param_1 + 200) =
       *(int *)(param_1 + 0xb4) + *(int *)(&DAT_0885a314 + (uint)abStack_1c[bVar1] * 4) + 0x7800;
  *(undefined *)(param_1 + 0xbe) = auStack_18[bVar1];
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

