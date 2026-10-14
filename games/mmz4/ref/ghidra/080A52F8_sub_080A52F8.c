// sub_080A52F8 at 0x080A52F8 (thumb)

undefined4 sub_080A52F8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885ee58);
    sub_0801CF00(param_1,0x4010);
    sub_0801D330(param_1);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) << 1;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[bVar1] << 1;
    *(undefined4 *)(param_1 + 0xb4) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((((*puVar5 & 0x200) == 0) &&
      (iVar3 = *(int *)(param_1 + 0xb4) + -1, *(int *)(param_1 + 0xb4) = iVar3, iVar3 != 0)) &&
     ((*puVar5 & 4) == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar4 < 0x2001) {
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) {
        return in_lr;
      }
      uVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((uVar4 & 0xf) == 0xf) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    sub_080D0894(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

