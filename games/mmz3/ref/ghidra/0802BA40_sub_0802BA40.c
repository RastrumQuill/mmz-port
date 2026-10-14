// sub_0802BA40 at 0x0802BA40 (thumb)

undefined4 sub_0802BA40(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  cVar1 = sub_08032EEC(param_1,0x1d);
  if (cVar1 == '\0') {
    uVar3 = 0xfffffe00;
  }
  else {
    uVar3 = 0xfffffd80;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  puVar4 = (undefined *)(param_1 + 0x70);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar4) == 0x700) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,0x701);
    }
  }
  else if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x218) & 0x400) != 0) {
      sub_080177CC(param_1,0x701,(short)*(char *)(param_1 + 0x71),1);
    }
    if ((*(uint *)(param_1 + 0x218) & 0x40) == 0) {
      sub_080177CC(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar4),
                   (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sVar2 = sub_080264E0(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
      if (sVar2 == 0) {
        cVar1 = sub_08026D38(param_1,&DAT_0835b034 + (uint)*(byte *)(param_1 + 0x147) * 8,1);
        if (cVar1 == '\x03') {
          *(undefined *)(param_1 + 0xf) = 2;
          sub_0802BBAC(param_1);
        }
        else if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x05')) &&
                (*(char *)(param_1 + 0x72) < '\x02')) {
          sub_0800471C(0xd);
        }
      }
      else {
        sub_080177CC(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar4),
                     (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      }
    }
  }
  return in_lr;
}

