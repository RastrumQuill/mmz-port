// sub_0803A628 at 0x0803A628 (thumb)

undefined4 sub_0803A628(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined uVar6;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0835daa4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8039f89;
    cVar2 = sub_08034748(iVar3);
    sub_080073A0(param_1 + 0x74,&DAT_0835daa4,cVar2 + '\f',
                 (&DAT_0835da4c)[*(byte *)(param_1 + 0xc1)],0xffffffff,0,uVar6);
    *(undefined4 *)(param_1 + 0x98) = 0x8039f89;
    sub_08017700(param_1,0x8e00);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      bVar1 = *(byte *)(param_1 + 10);
      uVar4 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar4 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) -
           (int)*(short *)(&DAT_0835da64 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar6 = 0x80;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (int)*(short *)(&DAT_0835da64 + (uint)*(byte *)(param_1 + 0x10) * 4);
      uVar6 = 0;
    }
    *(undefined *)(param_1 + 0x13) = uVar6;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (int)*(short *)(&DAT_0835da56 + (uint)*(byte *)(param_1 + 0x10) * 4);
    if (*(char *)(iVar3 + 0xc2) == '\x03') {
      uVar6 = 0xc0;
    }
    else {
      uVar6 = 0x80;
    }
    *(undefined *)(param_1 + 0x12) = uVar6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar2 = *(char *)(param_1 + 0x13) + '\b';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13) + -8;
  }
  *(char *)(param_1 + 0x13) = cVar2;
  iVar5 = *(int *)(iVar3 + 0x54) +
          *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17))
          * 0x20;
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar3 + 0x58) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x20 + -0x1000;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(int *)(iVar3 + 0x54) < iVar5) {
      uVar6 = 0x80;
    }
    else {
      uVar6 = 0;
    }
    *(undefined *)(param_1 + 0xc0) = uVar6;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

