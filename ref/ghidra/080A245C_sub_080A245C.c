// sub_080A245C at 0x080A245C (thumb)

undefined4 sub_080A245C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

