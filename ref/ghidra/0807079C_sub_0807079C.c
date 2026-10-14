// sub_0807079C at 0x0807079C (thumb)

undefined4 sub_0807079C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if ((DAT_02022adc & 1) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b12d4)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b121c,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x8070c29;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x10) != '\x03') {
    sub_080489E4(param_1);
    iVar2 = *(int *)(DAT_0202286c + 0x4c);
    iVar3 = iVar2 - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = 0 < iVar3;
    if (iVar2 == *(int *)(param_1 + 0x4c) || iVar3 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,(&DAT_082b12d8)[*(byte *)(param_1 + 0x10)]);
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (iVar2 = sub_08005458(DAT_02022e98), iVar2 != 0)) {
    *(undefined *)(iVar2 + 9) = 0x39;
    *(undefined4 *)(iVar2 + 0x14) = 0x807079d;
    *(ushort *)(iVar2 + 0x1c) = DAT_02022f12;
    *(byte *)(iVar2 + 0x1e) = DAT_02022f69;
    *(undefined *)(iVar2 + 0x10) = 3;
    *(int *)(iVar2 + 0x20) = param_1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
  }
  iVar2 = sub_08048BE8(param_1);
  if (iVar2 != 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b1270 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b12a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  sub_080014E8(&DAT_084b8474,(DAT_02022f12 - 0x200) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084b8480,(DAT_02022f69 - 4) * 0x20 + 0x200);
  sub_0807096C(param_1);
  return in_lr;
}

