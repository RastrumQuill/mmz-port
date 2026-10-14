// sub_080E0ED0 at 0x080E0ED0 (thumb)

undefined4 sub_080E0ED0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  short asStack_18 [8];
  
  sub_08128B5C(asStack_18,&DAT_08129b8c,0x10);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  uVar2 = sub_080E1044(param_1);
  if ((uVar2 & 0xff) == 0xff) {
    *(undefined *)(param_1 + 0x78) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E1008(param_1);
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar3 = (int)asStack_18[((uVar2 << 0x18) >> 0x19) * 2];
    }
    else {
      iVar3 = asStack_18[((uVar2 << 0x18) >> 0x19) * 2] * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar3 = iVar3 >> 8;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x60) = (int)asStack_18[(uVar2 & 0xfe) + 1];
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x5c) * 0x17f;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    }
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    cVar1 = sub_08128A9C(uVar2 & 0xff,3);
    if (cVar1 == '\0') {
      sub_0801CF00(param_1,0xd211);
    }
    else {
      sub_0801CF00(param_1,0xf);
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
    sub_080E0FF4(param_1);
  }
  return in_lr;
}

