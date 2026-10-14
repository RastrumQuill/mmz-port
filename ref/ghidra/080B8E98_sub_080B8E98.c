// sub_080B8E98 at 0x080B8E98 (thumb)

undefined4 sub_080B8E98(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080B99C4();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080B95F0(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8728 + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080B9AB0(param_1);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

