// sub_0807B240 at 0x0807B240 (thumb)

undefined4 sub_0807B240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  char acStack_c [4];
  
  sub_080C8D70(acStack_c,&DAT_080c9374,3);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if ((*(char *)(param_1 + 0x73) == '\x03') ||
     (*(char *)(iVar2 + 0xd) != acStack_c[*(byte *)(param_1 + 0x10)])) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

