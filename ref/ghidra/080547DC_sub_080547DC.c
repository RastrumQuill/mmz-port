// sub_080547DC at 0x080547DC (thumb)

undefined4 sub_080547DC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080489E4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  cVar1 = *(char *)(param_1 + 0x10);
  if (((cVar1 == '\x03') || (cVar1 == '\x01')) || (cVar1 == '\x05')) {
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(int *)(param_1 + 0x4c) = DAT_02022c7c + -0x9800;
  }
  if ((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) {
    iVar3 = sub_08005458(DAT_02022e98);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 9) = 0x11;
      *(undefined4 *)(iVar3 + 0x14) = 0x80547dd;
      *(undefined2 *)(iVar3 + 0x1c) = DAT_02022ec2;
      *(undefined *)(iVar3 + 0x1e) = DAT_02022f41;
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x50) + -0x1600;
      *(char *)(iVar3 + 0x10) = *(char *)(param_1 + 0x10) + -2;
      *(int *)(iVar3 + 0x20) = param_1;
    }
    *(int *)(param_1 + 0x24) = iVar3;
    bVar2 = *(byte *)(param_1 + 10);
  }
  else {
    if (1 < (byte)(*(char *)(param_1 + 0x10) - 4U)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082af7dc,param_1 + 0x4c,8);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      sub_080033F0(param_1 + 0x6c,0);
      goto LAB_0805490e;
    }
    bVar2 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar2 | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082af7f8,param_1 + 0x4c,0xc);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  sub_080033F0(param_1 + 0x6c,8);
LAB_0805490e:
  *(undefined4 *)(param_1 + 0xb0) = 0x8054f9d;
  if (3 < *(byte *)(param_1 + 0x10)) {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      uVar4 = 0xfffffdf6;
    }
    else {
      uVar4 = 0x20a;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  *(undefined *)(param_1 + 0xd) = (&DAT_082af8d4)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0xc4) = 0;
  sub_08054968(param_1);
  return in_lr;
}

