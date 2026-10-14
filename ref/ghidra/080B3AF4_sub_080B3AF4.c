// sub_080B3AF4 at 0x080B3AF4 (thumb)

undefined4 sub_080B3AF4(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(&DAT_082b6e2c + (uint)*(byte *)(param_1 + 0x10) * 2);
  if ((((int)(uint)*(byte *)(DAT_0202286c + 0x1a4 + (uint)(uVar1 >> 3)) >> (uVar1 & 7) & 1U) == 0)
     && (cVar2 = sub_080B598C(uVar1 & 0xff), cVar2 == '\0')) {
    sub_080B3140(param_1);
    sub_080033F0(param_1 + 0x6c,5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b6e10,param_1 + 0x4c,1);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 4);
    sub_080B3BD8(param_1);
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

