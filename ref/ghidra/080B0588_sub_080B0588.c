// sub_080B0588 at 0x080B0588 (thumb)

undefined4 sub_080B0588(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    if (*(char *)(param_1 + 0xe) != '\0') {
      sub_0809C930(param_1,4);
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_0809C980(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

