// sub_080A2558 at 0x080A2558 (thumb)

undefined4 sub_080A2558(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if ((*(uint *)(DAT_02022b20 + 0x10) & 8) == 0) {
      bVar1 = *(byte *)(param_1 + 9);
    }
    else {
      if ((*(uint *)(DAT_02022b20 + 0x18) & 8) == 0) goto LAB_080a25a0;
      bVar1 = *(byte *)(param_1 + 9);
    }
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)bVar1 * 4) + 0xc);
  }
  else {
LAB_080a25a0:
    sub_0809C6C4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_0809C930(param_1,4);
    }
    else {
      sub_0809C930(param_1,0);
    }
    sub_0809C980(param_1);
    if (*(byte *)(param_1 + 0x10) < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b5aec,param_1 + 0x4c,1);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

