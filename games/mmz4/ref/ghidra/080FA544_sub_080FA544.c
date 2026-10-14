// sub_080FA544 at 0x080FA544 (thumb)

undefined4 sub_080FA544(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar1 = param_1 + 0x54;
  sub_080D4898(iVar1,&DAT_08867320,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_0886733c,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_08867358,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_08867374,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080D4898(iVar1,&DAT_08867390,0,*(byte *)(param_1 + 10) & 0x10);
  sub_08002B10(0xa8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

