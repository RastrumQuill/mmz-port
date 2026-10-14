// sub_0803A09C at 0x0803A09C (thumb)

undefined4 sub_0803A09C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835da74,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar1 = sub_08034748(uVar4);
    sub_080073A0(param_1 + 0x74,&DAT_0835da74,cVar1 + '\f',
                 (&DAT_0835da4c)[*(byte *)(param_1 + 0xc1)],0xffffffff,0xffffffff);
    *(undefined4 *)(param_1 + 0x98) = 0x8039f89;
    sub_08017700(param_1,0x6d01);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      bVar2 = *(byte *)(param_1 + 10);
      uVar6 = ~(uint)(bVar2 >> 4) & 1;
      if (uVar6 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) -
           (int)*(short *)(&DAT_0835da54 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar3 = 0x80;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (int)*(short *)(&DAT_0835da54 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar3 = 0;
    }
    *(undefined *)(param_1 + 0xc0) = uVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (int)*(short *)(&DAT_0835da56 + (uint)*(byte *)(param_1 + 0x10) * 4);
    *(undefined *)(param_1 + 0x12) = 0xb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  bVar2 = *(byte *)(param_1 + 10);
  if ((bVar2 & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x54) + -0x600;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar5 = sub_08009F80(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(byte *)(param_1 + 0xc0) = bVar2 & 0x10;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + 0x600;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar5 = sub_08009E14(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      *(undefined *)(param_1 + 0xc0) = 0x80;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar7;
    *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xc0) + -0x80;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

