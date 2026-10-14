// sub_0800C1AC at 0x0800C1AC (thumb)

undefined4 sub_0800C1AC(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a00 = (DAT_02000a00 & 0xfff8 | 0x2401) & 0xc7ff;
    DAT_02000a08 = 0x84c6;
    uVar7 = 0;
    do {
      if ((uVar7 & 1) == 0) {
        sub_081284E4(&DAT_08b3cad8 + uVar7 * 0x10,
                     (DAT_02000a08 & 0x1f00) * 8 + uVar7 * 0x20 + 0x6000000,8);
      }
      else {
        sub_081284E4(&DAT_08b38e88 + uVar7 * 0x10,
                     (DAT_02000a08 & 0x1f00) * 8 + uVar7 * 0x20 + 0x6000000,8);
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 0x24);
    local_24[0] = 0;
    sub_081284E4(local_24,(DAT_02000a08 & 0x1f00) * 8 + uVar7 * 0x20 + 0x6000000,0x10002e0);
    sub_08001EA4(&DAT_08df8698,0x4000);
    sub_08002208(&DAT_08df86a4,0);
    *(undefined4 *)(param_1 + 0x68) = 0x152000;
    *(undefined4 *)(param_1 + 0x6c) = 0x2b000;
    *(undefined4 *)(param_1 + 0x74) = 0x1cc00;
    *(undefined4 *)(param_1 + 0x78) = 0x7000;
    *(undefined2 *)(param_1 + 0x70) = 0x3c00;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_0202dad5 & 2) != 0) {
    DAT_0202dad5 = DAT_0202dad5 & 0xfd;
    DAT_0202dae0._0_2_ = 1;
  }
  uVar2 = (ushort)DAT_0202dae0;
  if ((ushort)DAT_0202dae0 == 0) {
    return in_lr;
  }
  uVar7 = *(ushort *)(param_1 + 0x10) + 1;
  *(short *)(param_1 + 0x10) = (short)uVar7;
  uVar1 = *(ushort *)(param_1 + 0x12);
  *(ushort *)(param_1 + 0x12) = uVar1 + 1;
  if (uVar2 < 200) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x38;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -0x38;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -0x100;
    if (0x80 < (uVar7 & 0xffff)) {
      *(short *)(param_1 + 0x70) =
           (*(short *)((int)&DAT_08128c10 + (uVar7 * 0x1000000 >> 0x17)) >> 6) +
           *(short *)(param_1 + 0x70);
    }
  }
  else if (uVar2 < 0x100) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -0x100;
    uVar2 = *(ushort *)((int)&DAT_08128c10 + (uVar7 * 0x1000000 >> 0x17));
    iVar4 = (int)((uint)uVar2 << 0x10) >> 0x12;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - iVar4;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar4;
    *(short *)(param_1 + 0x70) = ((short)uVar2 >> 6) + *(short *)(param_1 + 0x70);
  }
  else {
    if (0x103 < uVar2) {
      if (uVar2 < 0x11c) {
        psVar5 = (short *)((int)&DAT_08128c10 + (uVar7 * 0x1000000 >> 0x17));
        iVar4 = *psVar5 * 5 >> 2;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar4;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar4;
        *(short *)(param_1 + 0x70) = (*psVar5 >> 1) + *(short *)(param_1 + 0x70);
        *(undefined2 *)(param_1 + 0x12) = 0;
        goto LAB_0800c52e;
      }
      if (uVar2 < 0x15c) {
        iVar4 = *(short *)((int)&DAT_08128c10 + ((uVar1 + 0x41) * 0x1000000 >> 0x17)) * 5;
        iVar6 = iVar4 >> 4;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar6;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar6;
        puVar3 = (ushort *)(param_1 + 0x70);
        uVar7 = (iVar4 >> 7) + (uint)*puVar3;
        *puVar3 = (ushort)uVar7;
        if (0x4000 < (uVar7 & 0xffff)) {
          *puVar3 = 0x4000;
        }
        goto LAB_0800c52e;
      }
      if (0x15f < uVar2) {
        if (uVar2 < 0x182) {
          puVar3 = (ushort *)((int)&DAT_08128c10 + (uVar7 * 0x1000000 >> 0x17));
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (short)*puVar3 * 2;
          *(int *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) - ((int)((uint)*puVar3 << 0x10) >> 0x11);
        }
        else if (uVar2 < 0x192) {
          puVar3 = (ushort *)((int)&DAT_08128c10 + (uVar7 * 0x1000000 >> 0x17));
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (short)*puVar3 * 2;
          *(int *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) - ((int)((uint)*puVar3 << 0x10) >> 0x11);
          *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 2;
        }
        else if (uVar2 == 0x192) {
          DAT_0202dae0._2_2_ = DAT_0202dae0._2_2_ + 1;
        }
        else {
          *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x200 + (uint)DAT_0202dae0._2_2_;
          *(uint *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) + -0x40 + (uint)(DAT_0202dae0._2_2_ >> 2);
          puVar3 = (ushort *)(param_1 + 0x70);
          uVar2 = *puVar3;
          *puVar3 = uVar2 + 2;
          if (0x4000 < (ushort)(uVar2 + 2)) {
            *puVar3 = 0x4000;
          }
        }
        goto LAB_0800c52e;
      }
    }
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
LAB_0800c52e:
  if ((ushort)DAT_0202dae0 < 0x400) {
    DAT_0202dae0._0_2_ = (ushort)DAT_0202dae0 + 1;
  }
  return in_lr;
}

