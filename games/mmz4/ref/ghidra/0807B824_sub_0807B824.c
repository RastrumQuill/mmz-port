// sub_0807B824 at 0x0807B824 (thumb)

undefined4 sub_0807B824(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined auStack_14 [8];
  undefined4 uStack_4;
  
  sub_08128B5C(auStack_14,&DAT_081292f4,5);
  iVar1 = sub_0807E858(param_1,*(undefined4 *)(param_1 + 0x54));
  uStack_4 = in_lr;
  auStack_14[iVar1] = 0;
  iVar1 = sub_0807EA50(auStack_14,5);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0xb4) + *(int *)(&DAT_0885a314 + iVar1 * 4) + 0x7800;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859f68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return uStack_4;
}

