// sub_08053B90 at 0x08053B90 (thumb)

undefined4 sub_08053B90(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,4);
    sub_0800561C(param_1 + 0x74,&DAT_082af660);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (iVar2 = *(int *)(param_1 + 0x5c) + 1, *(int *)(param_1 + 0x5c) = iVar2, iVar2 == 3)) {
      *(byte *)(param_1 + 10) = bVar1 & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

