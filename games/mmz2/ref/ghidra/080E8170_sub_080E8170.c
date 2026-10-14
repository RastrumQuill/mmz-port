// sub_080E8170 at 0x080E8170 (thumb)

undefined4 sub_080E8170(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c [2];
  
  uVar5 = *(int *)(param_1 + 0xde8) + *(int *)(param_1 + 0xdec);
  if ((uVar5 & 0xffff) == 0) {
    *(undefined *)(param_1 + 2) = 0;
    uVar2 = uVar5;
    if ((int)uVar5 < 0) {
      uVar2 = uVar5 + 0x1ffff;
    }
    uVar5 = uVar5 + ((int)uVar2 >> 0x11) * -0x20000;
    sub_080EF11C(param_1,uVar5,*(undefined4 *)(&DAT_0835e520 + (uint)*(byte *)(param_1 + 0xde4) * 4)
                );
    local_1c[1] = 0xffffffff;
  }
  else {
    local_1c[1] = 0;
  }
  local_1c[0] = 0;
  iVar4 = 2;
  do {
    iVar4 = iVar4 + -1;
    iVar3 = (uint)*(byte *)(param_1 + 0xde4 + iVar4) * 4;
    cVar1 = sub_080EF11C(*(undefined4 *)(param_1 + 0xdd4 + iVar3),(int)*(char *)(local_1c + iVar4),
                         *(undefined4 *)(&DAT_0835e4fc + iVar3));
    local_1c[iVar4] = (int)cVar1;
  } while (iVar4 != 0);
  *(short *)(param_1 + 4) = (short)(char)local_1c[0];
  *(uint *)(param_1 + 0xde8) = uVar5;
  *(uint *)(param_1 + 0xdcc) = uVar5 + 0x7800;
  sub_080E8768(param_1,(int)*(char *)(param_1 + 0xde4),(int)*(char *)(param_1 + 0xde5));
  return in_lr;
}

