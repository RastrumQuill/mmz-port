// sub_08045224 at 0x08045224 (thumb)

undefined4 sub_08045224(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    piVar2 = (int *)(param_1 + 0xc0);
    if (*piVar2 != 0) {
      *(undefined *)(*piVar2 + 0xb4) = 1;
      *piVar2 = 0;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      sub_080127E4(param_1,0xa00b);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      sub_080127E4(param_1,0xa00c);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
        uVar3 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x40;
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar3;
      iVar4 = sub_08072398(param_1,4);
      *piVar2 = iVar4;
      sub_080032EC(0x2f);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_08003338((int)*(short *)(param_1 + 0xcc));
    *(short *)(param_1 + 0xcc) = 0;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar1 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else if (cVar1 == '\x02') {
    local_1c = (uint)*(byte *)(param_1 + 0xf);
    if (local_1c == 0) {
      local_18 = 0xffffc800;
      iVar4 = sub_080B878C(param_1,&local_1c);
      *(int *)(param_1 + 200) = iVar4;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (1 < *(byte *)(*(int *)(param_1 + 200) + 0xc)) {
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  }
  return in_lr;
}

