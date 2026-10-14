// sub_080A7F38 at 0x080A7F38 (thumb)

undefined4 sub_080A7F38(int param_1)

{
  char cVar1;
  byte bVar2;
  short *psVar3;
  short *psVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    bVar2 = *(byte *)(param_1 + 0xd);
    if (bVar2 == 1) {
      if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
        *(undefined *)(param_1 + 0x1e) = 0xd;
      }
      else {
        cVar1 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
        *(char *)(param_1 + 0x1e) = cVar1;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      sub_0809C834(param_1);
      sub_0809C930(param_1,8);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
      if (*(char *)(param_1 + 0x11) == '\0') {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined2 *)(param_1 + 200) = 0x100;
      *(undefined2 *)(param_1 + 0xca) = 0x100;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    }
    else {
      if (1 < bVar2) {
        if (bVar2 != 2) {
          return in_lr;
        }
        psVar3 = (short *)(param_1 + 200);
        *(short *)(param_1 + 0x48) = *psVar3;
        psVar4 = (short *)(param_1 + 0xca);
        *(short *)(param_1 + 0x4a) = *psVar4;
        *psVar3 = *psVar3 + -0x20;
        *psVar4 = *psVar4 + -0x10;
        if (*psVar3 < 0x10) {
          *psVar3 = 0x10;
        }
        if (0xf < *psVar4) {
          return in_lr;
        }
        *psVar4 = 0x10;
        goto LAB_080a8052;
      }
      if (bVar2 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
LAB_080a8052:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

