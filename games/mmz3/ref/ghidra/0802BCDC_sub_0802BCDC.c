// sub_0802BCDC at 0x0802BCDC (thumb)

undefined4 sub_0802BCDC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08032EEC(param_1,0x1d);
  if (cVar1 == '\0') {
    uVar2 = 0x200;
  }
  else {
    uVar2 = 0x280;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x800) != 0) {
      sub_080177CC(param_1,0x704,(short)*(char *)(param_1 + 0x71),1);
    }
    if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
      sub_080177CC(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)),
                   (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      cVar1 = sub_08026E54(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 2;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else if (cVar1 == '\x03') {
        *(undefined *)(param_1 + 0xf) = 3;
        sub_0802BDDC(param_1);
      }
      else if (((*(char *)(param_1 + 0x71) == '\x01') || (*(char *)(param_1 + 0x71) == '\x04')) &&
              (*(char *)(param_1 + 0x72) < '\x02')) {
        sub_0800471C(0xd);
      }
    }
  }
  return in_lr;
}

