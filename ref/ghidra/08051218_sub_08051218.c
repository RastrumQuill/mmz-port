// sub_08051218 at 0x08051218 (thumb)

undefined4 sub_08051218(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08048A54(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  sub_080055FC(param_1 + 0x74,&DAT_082af4a8,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8051661;
  if (*(char *)(param_1 + 0x10) == '\a') {
    sub_080033F0(param_1 + 0x6c,1);
  }
  else {
    sub_080033F0(param_1 + 0x6c,0);
  }
  *(undefined *)(param_1 + 0xd) = (&DAT_082af4fe)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  if (*(byte *)(param_1 + 0x10) < 6) {
    iVar3 = 0;
    iVar1 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    iVar1 = iVar1 + 0x1400;
    *(int *)(param_1 + 0xbc) = iVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined *)(param_1 + 0xc5) = 0;
    *(bool *)(param_1 + 0x11) = 2 < *(byte *)(param_1 + 0x10);
    bVar2 = 0;
    iVar4 = param_1;
    if ((&DAT_082af4f8)[*(byte *)(param_1 + 0x10)] != '\0') {
      do {
        iVar3 = sub_08005458(DAT_02022e98);
        bVar2 = bVar2 + 1;
        if (iVar3 != 0) {
          *(undefined *)(iVar3 + 9) = 0xb;
          *(undefined4 *)(iVar3 + 0x14) = 0x8051219;
          *(undefined2 *)(iVar3 + 0x1c) = DAT_02022eb6;
          *(undefined *)(iVar3 + 0x1e) = DAT_02022f3b;
          *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
          *(int *)(iVar3 + 0x50) = iVar1;
          *(undefined *)(iVar3 + 0x10) = 6;
          *(bool *)(iVar3 + 0x11) = 2 < *(byte *)(param_1 + 0x10);
          *(int *)(iVar4 + 0x24) = iVar3;
          *(int *)(iVar3 + 0x20) = iVar4;
          *(byte *)(iVar3 + 0xc5) = bVar2;
          iVar1 = iVar1 + 0x1400;
          iVar4 = iVar3;
        }
      } while (bVar2 < (byte)(&DAT_082af4f8)[*(byte *)(param_1 + 0x10)]);
    }
    *(undefined4 *)(iVar3 + 0x24) = 0;
    sub_080511D0(iVar3);
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + 0x1400;
  sub_080513A4(param_1);
  return in_lr;
}

