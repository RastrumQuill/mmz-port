// sub_080D2D34 at 0x080D2D34 (thumb)

undefined4 sub_080D2D34(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    bVar1 = *(byte *)(param_1 + 0x11);
    *(byte *)(param_1 + 0x11) = bVar1 & 0xf;
    iVar6 = *(byte *)(param_1 + 0x11) + 0xf5;
    sub_0800393C(&DAT_085d78f8 + iVar6 * 5,
                 ((uint)(ushort)(&DAT_0202fa10)[iVar6] -
                 (uint)((ushort)(&DAT_085d78fe)[iVar6 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7904 + iVar6 * 0x14,
                 ((uint)(ushort)(&DAT_0202f810)[iVar6] - (uint)(byte)(&DAT_085d790b)[iVar6 * 0x14])
                 * 0x20 + 0x200);
    sub_08017700(param_1,(*(byte *)(param_1 + 0x11) + 0xf5) * 0x1000000 >> 0x10);
    if (bVar1 < 0x10) {
      sub_080177F4(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sVar3 = sub_080D0554(param_1,(*(byte *)(param_1 + 0x11) + 0xf5) * 0x1000000 >> 0x10,0);
    if (sVar3 == 0) {
      return in_lr;
    }
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    iVar6 = sub_08017B8C(param_1);
    sub_080040A8(0xf8,(uint)(iVar6 << 0x18) >> 0x13 | 0x200);
    break;
  case 3:
    sub_080177F4(param_1);
    cVar2 = sub_080041E4(0xf8);
    if (cVar2 != '\x03') {
      return in_lr;
    }
    sub_08004230(0xf8);
    break;
  case 4:
    iVar6 = sub_08017B8C(param_1);
    sub_080040A8(0xf9,(uint)(iVar6 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar2 = sub_080041E4(0xf9);
    if (cVar2 != '\x04') {
      return in_lr;
    }
    sub_08004230(0xf9);
    iVar6 = sub_08017B8C(param_1);
    sub_080040A8(0xfa,(uint)(iVar6 << 0x18) >> 0x13 | 0x200);
    break;
  case 6:
    sub_080177F4(param_1);
    cVar2 = sub_080041E4(0xfa);
    if (cVar2 != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) +
         *(int *)(&DAT_0836d5b0 + (uint)*(byte *)(param_1 + 0x11) * 4) * -0x80;
    iVar6 = sub_080BCE88(param_1 + 100,1,0);
    *(int *)(param_1 + 0x28) = iVar6;
    *(undefined *)(iVar6 + 0x74) = 0x1f;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0x1f;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0x1f;
    sub_0800471C(0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(&DAT_0836d5b0 + (uint)*(byte *)(param_1 + 0x11) * 4);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080177F4(param_1);
    uVar8 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar8;
    uVar5 = uVar8 & 0xff;
    if (uVar5 < 0x20) {
      iVar7 = *(int *)(param_1 + 0x28);
      sVar3 = *(short *)((int)&DAT_080fe64c + (uVar8 * 0x2000000 >> 0x17));
      iVar6 = *(int *)(param_1 + 0x5c);
    }
    else {
      if (uVar5 == 0x20) {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) = (*(int *)(param_1 + 0x5c) + -2) * 0x100;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        goto LAB_080d300a;
      }
      if (uVar5 < 0x36) {
        *(int *)(*(int *)(param_1 + 0x28) + 0x78) = (*(int *)(param_1 + 0x5c) + -4) * 0x100;
        goto LAB_080d300a;
      }
      if (0x3f < uVar5) {
        uVar5 = 0;
        do {
          sub_080C5150(2,uVar5 & 0xff,*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(&DAT_0836d5b0 + (uint)*(byte *)(param_1 + 0x11) * 4),0);
          uVar8 = uVar5 * 0x10000 + 0x80000;
          uVar5 = uVar8 >> 0x10;
        } while ((int)uVar8 >> 0x10 < 0x100);
        *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
        sub_08004230(0xfa);
        bVar1 = *(byte *)(param_1 + 0x11);
        iVar6 = sub_08017B8C(param_1);
        sub_080040A8(bVar1 + 0xfb,(uint)(iVar6 << 0x18) >> 0x13 | 0x200);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        goto LAB_080d300a;
      }
      iVar7 = *(int *)(param_1 + 0x28);
      sVar3 = *(short *)((int)&DAT_080fe64c + (uVar8 * -0x8000000 >> 0x17));
      iVar6 = *(int *)(param_1 + 0x5c) + -4;
    }
    *(int *)(iVar7 + 0x78) = sVar3 * iVar6;
LAB_080d300a:
    *(uint *)(*(int *)(param_1 + 0x28) + 0x78) =
         *(int *)(*(int *)(param_1 + 0x28) + 0x78) + (*(byte *)(param_1 + 0x12) & 1) * 0x800;
    return in_lr;
  case 8:
    cVar2 = sub_080041E4(*(byte *)(param_1 + 0x11) + 0xfb);
    if (cVar2 != '\x03') {
      return in_lr;
    }
    break;
  case 9:
    sub_08004230(*(byte *)(param_1 + 0x11) + 0xfb);
  default:
    goto switchD_080d2d4a_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d2d4a_caseD_a:
  return in_lr;
}

