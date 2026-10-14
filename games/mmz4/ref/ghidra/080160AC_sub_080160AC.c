// sub_080160AC at 0x080160AC (thumb)

undefined4 sub_080160AC(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000a04)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 2;
    *(undefined4 *)(param_1 + 0x50) = 0;
    DAT_0202ea60 = 0x3c000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (DAT_0202dad4 != '@') goto switchD_080160f0_caseD_5;
    sub_08002B10(0x17c);
    sub_08002B10(0x52);
    sub_080074C0(0x16,2,0);
    sub_080074C0(0x17,2,0);
    sub_080074C0(0x18,2,0);
    sub_080074C0(0x16,3,0);
    sub_080074C0(0x17,3,0);
    sub_080074C0(0x18,3,0);
    sub_080074C0(0x16,4,0);
    sub_080074C0(0x17,4,0);
    sub_080074C0(0x18,4,0);
    sub_080074C0(0x16,5,0x49);
    sub_080074C0(0x17,5,0x3b);
    sub_080074C0(0x18,5,0x3c);
    local_1c = 0x157000;
    local_18 = 0x1b000;
    sub_080F3698(&local_1c,0);
    local_1c = 0x163000;
    local_18 = 0x1b000;
    sub_080F3698(&local_1c,0);
    local_1c = 0x157000;
    local_18 = 0x25000;
    sub_080F3698(&local_1c,1);
    local_1c = 0x160800;
    local_18 = 0x25000;
    sub_080F3698(&local_1c,1);
    local_1c = 0x157000;
    local_18 = 0x33000;
    sub_080F3698(&local_1c,0);
    local_1c = 0x163000;
    local_18 = 0x33000;
    sub_080F3698(&local_1c,0);
    local_1c = 0x15a000;
    local_18 = 0x37800;
    sub_080F3698(&local_1c,2);
    *(undefined2 *)(param_1 + 0x10) = 0x1e;
    DAT_0202ea6e = 0x8001;
    break;
  case 1:
    sVar1 = *(short *)(param_1 + 0x10) + -1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 != 0) goto switchD_080160f0_caseD_5;
    *(undefined2 *)(param_1 + 0x10) = 0xa0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    break;
  case 2:
    uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    if (uVar2 < 0x300) {
      *(short *)(param_1 + 0x12) = (short)(uVar2 + 0x10);
      if ((uVar2 + 0x10 & 0xffff) == 0x100) {
        DAT_0202ea6e = 0x8002;
      }
      uVar2 = (uint)*(ushort *)(param_1 + 0x12);
      if (uVar2 == 0x200) {
        DAT_0202ea6e = 0x8003;
      }
      if (uVar2 == 0x300) {
        DAT_0202ea6e = 0x8004;
      }
    }
    else {
      DAT_0202ea60 = 0x280000;
    }
    iVar3 = *(int *)(param_1 + 0x50) - (uVar2 >> 8);
    *(int *)(param_1 + 0x50) = iVar3;
    if (-0x1e1 < iVar3) goto switchD_080160f0_caseD_5;
    *(undefined4 *)(param_1 + 0x50) = 0xfffffe20;
    break;
  case 3:
    sub_080074C0(0x16,5,0x76);
    sub_080074C0(0x17,5,0x77);
    sub_080074C0(0x18,5,0x78);
    sub_080074C0(0x16,6,0x86);
    sub_080074C0(0x17,6,0x87);
    sub_080074C0(0x18,6,0x88);
    sub_080074C0(0x16,7,0x79);
    sub_080074C0(0x17,7,0x7a);
    sub_080074C0(0x18,7,0x7b);
    sub_080074C0(0x16,8,0x89);
    sub_080074C0(0x17,8,0x8a);
    sub_080074C0(0x18,8,0x8b);
    sub_08002B5C(0x17c);
    sub_08002B10(0x17f);
    *(undefined2 *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    uVar4 = *(short *)(param_1 + 0x12) - 1;
    *(ushort *)(param_1 + 0x12) = uVar4;
    DAT_0202ea6e = uVar4 | 0x8000;
    if (uVar4 == 0) {
      DAT_0202ea6e = 0x8000;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      DAT_0202dad4 = 'P';
    }
  default:
    goto switchD_080160f0_caseD_5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080160f0_caseD_5:
  if (*(int *)(DAT_0202dbf0 + 0x58) < 0x3c000) {
    DAT_0202ea58 = 0x177000;
  }
  else {
    DAT_0202ea58 = 0x3c0000;
  }
  return in_lr;
}

