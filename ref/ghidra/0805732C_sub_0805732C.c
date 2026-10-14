// sub_0805732C at 0x0805732C (thumb)

undefined4 sub_0805732C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0xbc) & 0x100) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082af948,param_1 + 0x4c,0x30);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0x8056811;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
      sub_080033F0(param_1 + 0x6c,7);
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
      *(undefined *)(param_1 + 0xc4) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0xbc) & 2) != 0) {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080561A8(param_1);
  }
  return in_lr;
}

