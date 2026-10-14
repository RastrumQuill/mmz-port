// sub_080A2B80 at 0x080A2B80 (thumb)

undefined4 sub_080A2B80(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  short asStack_30 [12];
  
  sub_08128B5C(asStack_30,&DAT_08129630,0x18);
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885e860);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar4 + 0xc) < 3) {
    if (*(byte *)(iVar4 + 0xc) < 2) {
      uVar3 = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
    else {
      *(uint *)(param_1 + 0x54) =
           *(int *)(iVar4 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * (int)asStack_30[(uint)bVar2 * 2];
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (int)asStack_30[(uint)bVar2 * 2 + 1];
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_08128884(param_1,0x80a2c65);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

