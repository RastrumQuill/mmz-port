// sub_0808146C at 0x0808146C (thumb)

undefined4 sub_0808146C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar6 + 0xc) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      sub_08007390(param_1 + 0x74,&DAT_083647e0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar7 = *(int *)(iVar6 + 0x54);
    uVar4 = (uint)*(byte *)(iVar6 + 0xb4) + (uint)*(byte *)(iVar6 + 0xb5);
    iVar1 = (int)*(short *)((int)&DAT_080fe64c + (((uVar4 >> 1) + 0x40) * 0x1000000 >> 0x17));
    iVar5 = (int)*(short *)((int)&DAT_080fe64c + (uVar4 & 0xfffffffe));
    iVar2 = (*(int *)(DAT_0202f5c0 + 0x54) - iVar7) * iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar3 = iVar5 * (*(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(iVar6 + 0x58) + 0x1800));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar2 = (iVar2 >> 8) + (iVar3 >> 8);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x54) = iVar7;
    iVar1 = iVar2 * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar7 + (iVar1 >> 8);
    iVar6 = *(int *)(iVar6 + 0x58);
    *(int *)(param_1 + 0x58) = iVar6;
    iVar2 = iVar2 * iVar5;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x58) = iVar6 + (iVar2 >> 8);
  }
  return in_lr;
}

