// sub_0809D9E0 at 0x0809D9E0 (thumb)

undefined4 sub_0809D9E0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        sub_0809C980(param_1);
        if (*(int *)(param_1 + 0xbc) < 0) {
          bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
          *(byte *)(param_1 + 0x44) = bVar1;
          if (bVar1 == 0) {
            bVar1 = *(byte *)(param_1 + 10) & 0xef;
          }
          else {
            bVar1 = *(byte *)(param_1 + 10) | 0x10;
          }
          *(byte *)(param_1 + 10) = bVar1;
        }
        if ((*(ushort *)(param_1 + 0x90) & 0x2000) == 0) {
          return in_lr;
        }
        if (DAT_02022874 == '\0') {
          return in_lr;
        }
        sub_080BC808(799);
        cVar2 = *(char *)(param_1 + 0xe) + '\x01';
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_0809C980(param_1);
        if (DAT_0202365a != 0) {
          return in_lr;
        }
        DAT_02022874 = '\0';
        cVar2 = *(char *)(param_1 + 0xe) + -1;
      }
      goto LAB_0809dad2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    sub_0800561C(param_1 + 0x74,&DAT_082b5330);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  sub_0800561C(param_1 + 0x74,&DAT_082b5368);
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0809dad2:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

