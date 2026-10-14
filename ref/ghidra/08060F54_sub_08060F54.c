// sub_08060F54 at 0x08060F54 (thumb)

undefined4 sub_08060F54(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0xc1);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0xd) = cVar1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b055c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08060FAC(param_1);
  }
  return in_lr;
}

