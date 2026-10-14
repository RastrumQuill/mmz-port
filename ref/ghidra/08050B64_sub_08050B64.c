// sub_08050B64 at 0x08050B64 (thumb)

undefined4 sub_08050B64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') && ((DAT_02022ae1 & 0x80) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0xbc) = iVar1 + -0x800;
    *(int *)(param_1 + 0x50) = iVar1 + -0x800;
    if (((int)(uint)(byte)(&DAT_02022ad4)
                          [(int)*(uint *)(&DAT_082af488 + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3]
         >> (*(uint *)(&DAT_082af488 + (uint)*(byte *)(param_1 + 0x10) * 4) & 7) & 1U) == 0) {
      sub_080489E4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
      sub_080055FC(param_1 + 0x74,&DAT_082af450,param_1 + 0x4c,0x14);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0xc0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      sub_08050C7C(param_1);
    }
    else {
      sub_080489E4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      sub_08051038(param_1);
    }
  }
  return in_lr;
}

