// sub_0809FF54 at 0x0809FF54 (thumb)

undefined4 sub_0809FF54(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08367860);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x5c) = (int)*(short *)(&DAT_08367896 + (uint)*(byte *)(param_1 + 0x12) * 2);
    sub_08017700(param_1,0x3401);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0809ff74_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a0032:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0809ff74_caseD_6:
    iVar2 = *(int *)(iVar5 + 0x54);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = *(int *)(param_1 + 0x68) >> 8;
    iVar1 = *(int *)(param_1 + 0x5c) *
            (int)*(short *)((int)&DAT_080fe64c + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17));
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar2 + (iVar1 >> 8);
    iVar2 = *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar1 = *(int *)(param_1 + 0x5c) *
            (int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17));
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = iVar2 + (iVar1 >> 8);
    if (1 < *(byte *)(iVar5 + 0xc)) {
      uVar4 = 0x20000000;
      iVar1 = 3;
      do {
        sub_080BC178(iVar5,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x100,
                     uVar4 >> 0x18);
        uVar4 = uVar4 + 0x40000000;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    return in_lr;
  case 1:
    goto switchD_0809ff74_caseD_1;
  case 2:
    *(undefined4 *)(param_1 + 100) = 0;
    sub_08017700(param_1,0x3402);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar1 = *(int *)(param_1 + 100) + 4;
    *(int *)(param_1 + 100) = iVar1;
    if (0x200 < iVar1) {
      *(undefined4 *)(param_1 + 100) = 0x200;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 100);
    sub_080177F4(param_1);
    if (*(char *)(iVar5 + 0xce) == '\0') goto switchD_0809ff74_caseD_6;
    iVar2 = *(int *)(param_1 + 0x68);
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = iVar2 + 0xffff;
    }
    if (0x1ff < (iVar2 + (iVar1 >> 0x10) * -0x10000) - 0x5f00U) goto switchD_0809ff74_caseD_6;
    goto LAB_080a0032;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar1 = *(int *)(param_1 + 100) + -0x10;
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 100);
    sub_080177F4(param_1);
  default:
    goto switchD_0809ff74_caseD_6;
  }
}

