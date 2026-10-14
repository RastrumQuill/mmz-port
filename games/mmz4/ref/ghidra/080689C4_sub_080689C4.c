// sub_080689C4 at 0x080689C4 (thumb)

undefined4 sub_080689C4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  byte abStack_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined2 *local_2c;
  undefined2 *local_28;
  int local_24;
  
  sub_08128B5C(abStack_54,&DAT_081291e0,2);
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 1;
  local_30 = (uint)abStack_54[uVar4];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  local_40 = *(undefined4 *)(param_1 + 0x54);
  local_3c = *(undefined4 *)(param_1 + 0x58);
  uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  local_3c = uVar5;
  uVar6 = sub_08008988(local_40,uVar5);
  *(undefined4 *)(param_1 + 0xd8) = uVar6;
  uVar5 = sub_08008748(local_40,uVar5);
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_2c = &DAT_0202e040;
  sub_08001D30(&DAT_08c446cc,(DAT_0202e0ee - 0x200) * 0x20 + 0x10000);
  local_28 = &DAT_0202de40;
  sub_08002208(&DAT_08c446d8,(DAT_0202deee - 4) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c446e0,((ushort)local_2c[0x58] - 0x300) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c446ec,((ushort)local_28[0x58] - 5) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c446f4,((ushort)local_2c[0x59] - 0x380) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44700,((ushort)local_28[0x59] - 6) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  iVar7 = sub_0809E798(param_1,0,0);
  if (iVar7 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar8 = (int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
  else {
    iVar9 = sub_0809E798(param_1,3,0);
    if (iVar9 == 0) {
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
      *(undefined4 *)(iVar7 + 0x8c) = 0;
      *(undefined4 *)(iVar7 + 0x90) = 0;
      *(undefined *)(iVar7 + 0x94) = 0;
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfb;
      *(undefined4 *)(iVar7 + 0xc) = 3;
      *(undefined4 *)(iVar7 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar7 + 9) * 4) + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      bVar3 = *(byte *)(param_1 + 9);
    }
    else {
      iVar10 = sub_0809E798(param_1,2,0);
      if (iVar10 == 0) {
        *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfc;
        *(undefined4 *)(iVar9 + 0x8c) = 0;
        *(undefined4 *)(iVar9 + 0x90) = 0;
        *(undefined *)(iVar9 + 0x94) = 0;
        *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
        *(undefined4 *)(iVar9 + 0xc) = 3;
        *(undefined4 *)(iVar9 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar9 + 9) * 4) + 0xc);
        *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
        *(undefined4 *)(iVar7 + 0x8c) = 0;
        *(undefined4 *)(iVar7 + 0x90) = 0;
        *(undefined *)(iVar7 + 0x94) = 0;
        *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfb;
        *(undefined4 *)(iVar7 + 0xc) = 3;
        *(undefined4 *)(iVar7 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar7 + 9) * 4) + 0xc);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar8 = (int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4);
        *(undefined4 *)(param_1 + 0xc) = 3;
        goto LAB_08068d8e;
      }
      iVar11 = sub_0809E798(param_1,1,0);
      if (iVar11 != 0) {
        *(int *)(param_1 + 0xb4) = iVar7;
        *(int *)(param_1 + 0xb8) = iVar11;
        *(int *)(param_1 + 0xbc) = iVar10;
        *(int *)(param_1 + 0xc0) = iVar9;
        sub_0809E7F8(iVar7);
        sub_0809E7F8(iVar11);
        sub_0809E7F8(iVar10);
        sub_0809E7F8(iVar9);
        if (uVar4 == 0) {
          local_50 = sub_0806A748(param_1,1);
          local_50 = local_50 + -0x4000;
        }
        else {
          local_50 = sub_0806A748(param_1,1);
          local_50 = local_50 + -0x1800;
        }
        local_4c = sub_0806A748(param_1,3);
        uVar2 = local_30;
        local_4c = local_4c + -0x1800;
        local_48 = local_50 + (uVar4 * 2 + -1) * -0x2800;
        local_40 = (local_48 - local_50) / 2 + local_50;
        local_38 = local_50 +
                   *(short *)((int)&DAT_08128c10 + ((local_30 + 0xc0) * 0x1000000 >> 0x17)) * 0xc;
        local_38 = ((local_48 +
                    *(short *)((int)&DAT_08128c10 + ((local_30 + 0x40) * 0x1000000 >> 0x17)) * 0xc)
                   - local_38) / 2 + local_38;
        local_34 = local_4c +
                   *(short *)((int)&DAT_08128c10 + ((local_30 + 0x80) * 0x1000000 >> 0x17)) * 0xc;
        local_34 = local_34 + ((local_4c + (short)(&DAT_08128c10)[local_30] * 0xc) - local_34) / 2;
        uVar1 = (undefined)uVar4;
        *(undefined *)(param_1 + 0x4c) = uVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        if (uVar4 == 0) {
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xef;
        }
        else {
          *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) | 0x10;
        }
        *(undefined *)(iVar7 + 0x4c) = uVar1;
        *(byte *)(iVar7 + 0x4a) = *(byte *)(iVar7 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 10) & 0xef;
        }
        else {
          *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 10) | 0x10;
        }
        *(undefined *)(iVar11 + 0x4c) = uVar1;
        *(byte *)(iVar11 + 0x4a) = *(byte *)(iVar11 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(iVar10 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(iVar10 + 10) | 0x10;
        }
        *(byte *)(iVar10 + 10) = bVar3;
        *(undefined *)(iVar10 + 0x4c) = uVar1;
        *(byte *)(iVar10 + 0x4a) = *(byte *)(iVar10 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar3 = *(byte *)(iVar9 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(iVar9 + 10) | 0x10;
        }
        *(byte *)(iVar9 + 10) = bVar3;
        *(undefined *)(iVar9 + 0x4c) = uVar1;
        *(byte *)(iVar9 + 0x4a) = *(byte *)(iVar9 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        *(int *)(param_1 + 0x54) = local_40;
        *(int *)(param_1 + 0x58) = local_4c;
        *(int *)(iVar7 + 0x54) = local_38;
        *(int *)(iVar7 + 0x58) = local_34;
        *(int *)(iVar11 + 0x54) = local_50;
        *(int *)(iVar11 + 0x58) = local_4c;
        *(int *)(iVar9 + 0x54) = local_48;
        *(int *)(iVar9 + 0x58) = local_4c;
        *(int *)(iVar10 + 0x54) = local_48;
        *(int *)(iVar10 + 0x58) = local_4c;
        *(undefined *)(iVar9 + 0xb4) = (undefined)local_30;
        *(undefined *)(iVar10 + 0xb4) = (undefined)local_30;
        *(undefined *)(iVar11 + 0xb4) = (undefined)local_30;
        *(undefined *)(iVar7 + 0xb4) = (undefined)local_30;
        *(undefined *)(param_1 + 0xc4) = (undefined)local_30;
        local_44 = local_4c;
        local_3c = local_4c;
        local_24 = local_4c;
        sub_0806A77C(param_1,local_30,uVar4,1);
        sub_0806AA78(iVar7,uVar2,uVar4,1);
        sub_0806A844(iVar11,uVar2,uVar4,1);
        sub_0806A844(iVar10,uVar2,uVar4,1);
        sub_0806A844(iVar9,uVar2,uVar4,1);
        sub_08050408(param_1,&DAT_08858148,0x60);
        sub_0806906C(param_1);
        return in_lr;
      }
      *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfc;
      *(undefined4 *)(iVar10 + 0x8c) = 0;
      *(undefined4 *)(iVar10 + 0x90) = 0;
      *(undefined *)(iVar10 + 0x94) = 0;
      *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) & 0xfb;
      *(undefined4 *)(iVar10 + 0xc) = 3;
      *(undefined4 *)(iVar10 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar10 + 9) * 4) + 0xc);
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfc;
      *(undefined4 *)(iVar9 + 0x8c) = 0;
      *(undefined4 *)(iVar9 + 0x90) = 0;
      *(undefined *)(iVar9 + 0x94) = 0;
      *(byte *)(iVar9 + 10) = *(byte *)(iVar9 + 10) & 0xfb;
      *(undefined4 *)(iVar9 + 0xc) = 3;
      *(undefined4 *)(iVar9 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar9 + 9) * 4) + 0xc);
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
      *(undefined4 *)(iVar7 + 0x8c) = 0;
      *(undefined4 *)(iVar7 + 0x90) = 0;
      *(undefined *)(iVar7 + 0x94) = 0;
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfb;
      *(undefined4 *)(iVar7 + 0xc) = 3;
      *(undefined4 *)(iVar7 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar7 + 9) * 4) + 0xc);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      bVar3 = *(byte *)(param_1 + 9);
    }
    piVar8 = (int *)(&DAT_08854834 + (uint)bVar3 * 4);
    *(undefined4 *)(param_1 + 0xc) = 3;
  }
LAB_08068d8e:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 0xc);
  return in_lr;
}

